#!/bin/bash

./sender.py "$1" | ./relay.py
