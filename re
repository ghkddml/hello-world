{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "name": "Untitled4.ipynb의 사본",
      "provenance": [],
      "collapsed_sections": [],
      "authorship_tag": "ABX9TyPmDksR2E9v+jl103bksJnT",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/ghkddml/hello-world/blob/master/re\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "YwL3wzRAxclj",
        "colab_type": "code",
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 34
        },
        "outputId": "99f0ebf7-b846-43d4-faa5-4fabae1071bc"
      },
      "source": [
        "import requests\n",
        "import re\n",
        "res = requests.get(\"http://google.com\")\n",
        "res.raise_for_status()\n",
        "with open(\"mygoogle.html\", \"w\", encoding=\"utf8\") as f:\n",
        "  f.write(res.text)\n",
        "\n",
        "p = re.compile(\"ca.e\")\n",
        "\n",
        "# . : 하나의 문자를 의미  \n",
        "# ^ (^de): 문자열의 시작 > desk, destination,  \n",
        "# $ : 문자열의 끝\n",
        "\n",
        "m = p.match(\"case\")\n",
        "print(m.group())\n"
      ],
      "execution_count": 3,
      "outputs": [
        {
          "output_type": "stream",
          "text": [
            "case\n"
          ],
          "name": "stdout"
        }
      ]
    }
  ]
}