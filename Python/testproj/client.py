from base_client import BaseClient


class User(BaseClient):
    class UserNotFound(Exception):
        @staticmethod
        def not_found():
            print('User not found')

    method = 'users'
    http_method = 'get'

    def __init__(self, username):
        self.username = username

    def get_params(self):
        return {'user_ids': self.username}

    def response_handler(self, response):
        found = response.json().get('response')
        if found:
            return found[0]['uid']
        else:
            raise self.UserNotFound
