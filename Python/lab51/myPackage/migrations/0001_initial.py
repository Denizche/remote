# -*- coding: utf-8 -*-
# Generated by Django 1.11.6 on 2017-11-10 13:13
from __future__ import unicode_literals

import django.contrib.postgres.fields.jsonb
import django.contrib.postgres.fields.ranges
from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='products',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=100)),
                ('specifications', django.contrib.postgres.fields.jsonb.JSONField()),
                ('price', django.contrib.postgres.fields.ranges.FloatRangeField()),
            ],
        ),
    ]
