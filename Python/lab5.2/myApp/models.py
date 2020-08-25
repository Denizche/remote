from django.contrib.postgres import fields
from django.db import models

# Create your models here.

class Products(models.Model):
    name = models.CharField(max_length=100)
    specifications = fields.JSONField()
    price = fields.FloatRangeField()

