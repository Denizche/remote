import datetime
from base_client import BaseClient


class GetAges(BaseClient):
    class FriendsNotFound(Exception):
        @staticmethod
        def not_found():
            print('Friends not found')

    # метод vk api
    method = "friends"
    # GET, POST, ...
    http_method = "get"

    def __init__(self, id):
        self.id = id

    def get_params(self):
        return {
            "user_id": self.id,
            "fields": "bdate"
        }

    def response_handler(self, response):
        friends = response.json().get('response')
        if (not friends):
            raise self.FriendsNotFound

        ages = []
        today = datetime.datetime.today()

        for friend in friends:
            date = friend.get('bdate')
            if (not date) or (len(date)) < 8:
                age = 0
                ages.append(age)
                continue
            else:
                dt = datetime.datetime.strptime(date, '%d.%m.%Y')
                age = today.year - dt.year
                if today.month < dt.month:
                    age -= 1
                elif today.month == dt.month and today.day < dt.day:
                    age -= 1

                ages.append(age)

        return ages