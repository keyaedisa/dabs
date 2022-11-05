# This is an example PKGBUILD file. Use this as a start to creating your own,
# and remove these comments. For more information, see 'man PKGBUILD'.
# NOTE: Please fill out the license field for your package! If it is unknown,
# then please put 'unknown'.

# Maintainer: Your Name <youremail@domain.com>
pkgname="Archiso Build Scripts"
pkgver=0.0.1
pkgrel=A
epoch=
pkgdesc="Set of scripts designed to automate the archiso build process after making updates to the provided archiso profile."
arch=('x86_64')
url="https://github.com/keyaedisa"
license=('')
#groups=()
depends=('git','gawk','sed','archiso','bash')
makedepends=('git')
#checkdepends=()
#optdepends=()
provides=('Archiso Build Scripts')
conflicts=('Archiso-Build-Scripts')
replaces=()
backup=()
options=()
install=
changelog=
source=("https://github.com/keyaedisa/archisoBuildScripts/"
#		"buildScripts/*"
#        "misc/.bashFormatting"
)
#noextract=()
#md5sums=()
#validpgpkeys=()

#prepare() {
#	cd "$pkgname-$pkgver"
#	patch -p1 -i "$srcdir/$pkgname-$pkgver.patch"
#}

#build() {
#	
#}

#check() {
#	cd "$pkgname-$pkgver"
#	make -k check
#}

package() {
	mkdir -p "${pkgdir}/usr/local/bin"
	cp -r  "${srcdir}/buildScripts/" "${srcdir}/misc/" "${srcdir}/help.sh" "${pkgdir}/usr/local/bin/abs"
	chmod +x ${srcdir}/usr/local/bin/help.sh"
#	cd "$pkgname-$pkgver"
#	make DESTDIR="$pkgdir/" install
}
