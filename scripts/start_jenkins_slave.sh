#!/bin/bash

java -Djava.awt.headless=true -jar slave.jar -jnlpUrl http://172.17.0.4:8080/computer/Arduino_Slave/slave-agent.jnlp &

