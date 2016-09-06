#!/bin/bash
echo "incrementing version number..."
perl -lpe 'BEGIN { sub inc { my ($num) = @_; ++$num } } s/(0\.1\.)(\d+)/$1 . (inc($2))/eg' < BonMot.podspec > tmp.podspec
new_version=`grep -Eo "(0\.1\.)(\d+)?" tmp.podspec`
echo "new version is " $new_version
mv tmp.podspec BonMot.podspec
git add --all
git commit -m "Release $new_version"
git push origin master
echo "pushing new tag..."
git add -A && git commit -m "Release $new_version"
git tag $new_version
git push --tags
pod repo push wurrly-specs BonMot.podspec --allow-warnings
echo "completed update."