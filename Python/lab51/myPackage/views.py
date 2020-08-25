from django.http import HttpResponse
from django.shortcuts import render
from django.views.generic import View


def function_view(request):
    return HttpResponse('response from func view')


class ClassBased(View):
    def get(self, request):
        return HttpResponse('response from class based view')


