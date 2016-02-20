#!/bin/bash
#
## slack_webhook.sh - Send slack notifications using webhooks.
## Wesley Silva <wesley.silva@concretesolutions.com.br>
#
## This script requires the following variables to work properly:
# - TEXT: Some text in one line. Use \n and \t to format the text.
# - CHANNEL: The channel name (without hashtag - #)
# - SLACK_URL: The complete URL to post to slack using webhooks

## Create a JSON with the message, channel and other options
JSON=$(
cat << EOF
{
    "username": "CI_IoT",
    "icon_url": "http://qvacua.com/media/jenkins-menu-icon.png",
    "channel": "#${CHANNEL}",
    "text": "${TEXT}"
}
EOF
)

## Submit the JSON to the Slack URL
curl -X POST -H 'Content-type: application/json' --data "$JSON" "$SLACK_URL"
