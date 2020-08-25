#ifndef VIDEOCAPTURE_H
#define VIDEOCAPTURE_H

#include <QPixmap>
#include <QImage>
#include <QThread>
#include <opencv2/opencv.hpp>

#define ID_CAMERA 0

class MyVideoCapture : public QThread
{
    Q_OBJECT
public:
    MyVideoCapture(QObject *parent = nullptr);

    QPixmap pixmap() const
    {
        return mPixmap;
    }
signals:
    void newPixmapCaptured();
protected:
    void run() override;
private:
    QPixmap mPixmap;            //Image in qt format
    cv::Mat mFrame;             //Image in opencv format
    cv::VideoCapture mVideoCap;

    QImage cvMatToQImage(const cv::Mat &inMat);
    QPixmap cvMatToQPixmap(const cv::Mat &inMat);
};

#endif // VIDEOCAPTURE_H
