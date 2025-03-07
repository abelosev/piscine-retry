#!/bin/bash
gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
ranlib libft.a

#gcc -Wall -Wextra -Werror main.c -L. -lft -o main

#-L. говорит компилятору искать библиотеки в текущем каталоге.
#-lft указывает компилятору использовать библиотеку libft.a (префикс lib и суффикс .a опускаются).
#-o main задает имя выходного файла

#как пользоваться:
# создать libft.h
# подключить .h везде
# gcc -Wall -Wextra -Werror main.c -L. -lft -o my_program
#
#


#!/bin/bash

# Определяем файлы исходного кода
SOURCE_FILES="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"

# Компилируем исходные файлы в объектные файлы
gcc -Wall -Wextra -Werror -c $SOURCE_FILES

# Создаём статическую библиотеку
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Индексируем библиотеку
ranlib libft.a

# Проверяем, успешно ли выполнена компиляция
if [ $? -eq 0 ]; then
    echo "Library created successfully."
else
    echo "Error creating library."
fi


Команда ranlib сканирует архив библиотеки, идентифицирует все символы, экспортируемые файлами объектного кода внутри архива, и создаёт таблицу, которая затем добавляется в архив библиотеки. Эта таблица используется линковщиками для ускорения процесса разрешения ссылок на символы.

La commande ranlib scanne l'archive de la bibliothèque, identifie tous les symboles exportés par les fichiers de code objet à l'intérieur de l'archive, et crée une table qui est ensuite ajoutée à l'archive de la bibliothèque. Cette table est utilisée par les éditeurs de liens pour accélérer le processus de résolution des références aux symboles.

###

Линковка (или связывание, англ. "linking") — это процесс, при котором компилятор или линкер объединяет различные объектные файлы (обычно с расширением .o или .obj) и библиотеки в один исполняемый файл или библиотеку. Этот процесс происходит после компиляции исходного кода программы, когда уже сгенерированы все необходимые объектные файлы.

La liaison (ou linking en anglais) est le processus par lequel le compilateur ou l'éditeur de liens (linker) combine divers fichiers objets (généralement avec l'extension .o ou .obj) et des bibliothèques en un seul fichier exécutable ou en une bibliothèque. Ce processus se déroule après la compilation du code source du programme, une fois que tous les fichiers objets nécessaires ont été générés.

###

La commande ar rc est utilisée pour créer et mettre à jour des bibliothèques statiques dans les systèmes d'exploitation Unix et similaires. Une bibliothèque statique est une archive contenant un ou plusieurs fichiers objets (fichiers .o), qui peuvent être liés avec d'autres fichiers objets lors de la création d'un fichier exécutable. Voici un détail de la commande :

ar : Abréviation de "archiver", c'est un outil utilisé pour créer et gérer des archives, qui regroupent de nombreux fichiers en un seul fichier pour faciliter la gestion.

rc : Ce sont des options de la commande ar signifiant :

r — replace : Indique à ar de remplacer les fichiers existants dans l'archive par de nouveaux ou d'ajouter de nouveaux fichiers s'ils sont absents.
c — create : Informe ar qu'il faut créer l'archive si elle n'existe pas encore. Généralement, l'utilisation de cette option supprime l'avertissement qui pourrait être affiché si l'archive est créée pour la première fois.
