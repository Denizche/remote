import json

from django.shortcuts import render
from django.views import View
from .models import *

# Create your views here.
with open("/home/catmen/Документы/lab2_repo/lab5/myApp/static/json/goods.json") as data_file:
    goods_list = json.load(data_file)


class IndexBaseClass(View):
    @staticmethod
    def get(request):
        context = {
            "page_name": 'Магазин электроники'
        }
        return render(request, "index.html",context=context)


def product(request, product_id):
    return render(request, "product.html", context=Products.objects.only(product_id))


def get_goods(request):
    return render(request, "goods.html", context={"goods" : Products.objects.all()})

def set_product(request):
    pass
