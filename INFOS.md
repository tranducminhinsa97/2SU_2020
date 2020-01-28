# repo folder hierarchy

- doc
- env
- out
- src
- tmp
- README.md
- IDEAS.md
- NOTES.md
- TODO.md

# HOWTO

## Récupérer le repo du cours / TD

```
git clone https://bitbucket.org/whitewand/2su_2020/
mv 2su_2020 2su_2020_orig
cd 2su_2020_orig
git pull # pour chaque update
```

## Créer votre propre repo

```
git clone https://bitbucket.org/whitewand/2su_2020/
cd 2su_2020
git config -e # ***modifier pour rajouter votre propre github***
# faire vos modifs
git status # voir ce qui a change
git add * # tout rajouter ou mettre le nom du fichier(s)
git commit -m "message"
git push origin master
```
