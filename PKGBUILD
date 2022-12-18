# This is an example PKGBUILD file. Use this as a start to creating your own,
# and remove these comments. For more information, see 'man PKGBUILD'.
# NOTE: Please fill out the license field for your package! If it is unknown,
# then please put 'unknown'.

# Maintainer: Your Name <keyaedisa>
pkgname="dab"
pkgver=3.4
pkgrel=0
epoch=
pkgdesc="dev abs builds"
arch=('x86_64')
url="https://github.com/keyaedisa/dabs"
#license=('')
#groups=()
depends=("git"
		"gawk"
		"sed"
		"archiso"
		"bash")
makedepends=('git')
#checkdepends=()
#optdepends=()
provides=('dab')
#conflicts=('')
replaces=('absd')
#backup=()
#options=()
install=dab.install
#changelog=
source=("git+ssh://git@github.com/keyaedisa/dabs.git/")
#noextract=()
#md5sums=()
sha256sums=('SKIP')

package() {
	mkdir -p "${pkgdir}/usr/local/bin/"
	cp "${srcdir}/dab" "${pkgdir}/usr/local/bin/dab"
	mkdir -p "${pkgdir}/etc/dab/"
	cp -rf "${srcdir}/misc/" "${pkgdir}/etc/dab/"
	cp -rf "${srcdir}/options/" "${pkgdir}/etc/dab/"
	cp "${srcdir}/options/.options" "${pkgdir}/etc/dab/"
#	rm -r "../gc"
	rm -r "${srcdir}"

	if [[ ${pkgname} == "abs" ]]; then
		sed -i  "0,/version/s/.*version.*/version=${pkgver}-${pkgrel}/" "${pkgdir}"/etc/abs/misc/.formatting
 	elif [[ ${pkgname} == "dabs" ]]; then
 		sed -i  "0,/version/s/.*version.*/version=${pkgver}-${pkgrel}/" "${pkgdir}"/etc/dabs/misc/.formatting
 	else
		echo "hey bb"
 	fi


}


