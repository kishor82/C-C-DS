#!/bin/bash

# Set github configs
git config user.name kishor82
git config user.email kishorrathva8298@gmail.com

# evaluate ssh agent
eval $(ssh-agent -s)

# Add identity (private key related github)
ssh-add ~/.ssh/my_id_rsa

# Check for your identity
ssh -T git@github.com