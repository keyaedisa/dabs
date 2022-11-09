# abs Repo

Welcome to the Official abs Source Repository! The latest built version of abs is hosted on my package repo called Valen and
hosted at https:github.com/keyaedisa/valen_repo!

abs is a terminual utility I wrote in bash meant to not only automate the build
process of any archiso profile it is provided, but to also make it an
interative process.

v2.0 is a complete rewrite from v1.0. abs is now much more fleshed out and is
ready to be used by other users both new or experienced!

# Are you an Arch Distro maintainer?

Tired of your clunky and not so powerful build scripts? Are you annoyed
with the hassle of having to constantly tweak your scripts or what ever the
case may be? Reach out to me and we discuss the possibility of creating  an
option in abs meant specifically for the build of your iso! A simplified,
automated, and intelligent build process can be made for you!

I am proud to say that XeroLinux is abs's first example of this!
XeroLinux is a reliably stable arch distro known for being eye candy!
Formerly built with Arco's build scripts, it is now built with an abs option
created just for Xero! No more dealing with cumbersome build scripts. Simply run
'abs xero' in your terminal and the abs' interactive build menu begins!
Starting with intelligently checking if you are already in the latest xero_iso
cloned git repo ready to build, or if you need to clone the repo so you can get
started! This functioniality and more provided by abs!

# Features

- abs is capable of updating your interactively updating your archiso profiles
  profiledef.sh!
- abs can also update your dev-rel in your airootfs/etc/ directory!

abs also runs several tests behind the scenes to ensure that your iso's build
process can run smoothly!

Some of these checks include:
- Ensuring you have a functioning internet connection.
- Making sure archiso is up to date
- Making sure sudo permissions are not used innappropriately
- Checking if you are in the correct directory
- Ensuring that Valen Repo is avaiable  in both of your profiles pacman.conf's!
  Both for the live iso and what will become the post install system!
- This and so much more!

Have a feature you want to request? Reach out to me and I will see if I can get
it on a priority list depending on it's ease of implementation of and
usefulness!

#Yes that's right

abs CAN be used for your iso!

If you don't have build scripts of your own do not fret, abs was made for you!

At last abs is production ready.

# How to use abs

abs can be ran with no options and it will list available options for you to
choose!

Since abs is still in it's infancy, currently there are only 3 available options.
- custom : this option is to be used with your custom archiso profile!
- xero : this option starts an interactive process to build XeroLinux from
latest git!
- help : Explains abs functionality in greather depth!

To get started with abs either install latest release, or copy the command below
to add Valen Repository to your pacman.conf so that you can install abs with
pacman and automatically recieve latest updates!

Good Luck and have fun!

abs 3.0 is already on the drawing board and will be a massive leap in
functionality from abs 2.0!
