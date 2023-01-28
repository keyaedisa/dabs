# This is an example PKGBUILD file. Use this as a start to creating your own,
# and remove these comments. For more information, see 'man PKGBUILD'.
# NOTE: Please fill out the license field for your package! If it is unknown,
# then please put 'unknown'.

# Maintainer: Your Name <keyaedisa>
pkgname="dab"
pkgver=3.5
pkgrel=13
epoch=
pkgdesc="abs but with extra features."
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
#replaces=('')
#backup=()
#options=()
#install=dab.install
#changelog=
source=("git+ssh://git@github.com/keyaedisa/dabs.git")
#noextract=()
#md5sums=()
sha256sums=('SKIP')

package() {
	mkdir -p "${pkgdir}/usr/local/bin/"
	cp "${srcdir}/dabs/dab" "${pkgdir}/usr/local/bin/dab"
	mkdir -p "${pkgdir}/etc/dab/"
	cp -rf "${srcdir}/dabs/misc/" "${pkgdir}/etc/dab/"
	cp -rf "${srcdir}/dabs/options/" "${pkgdir}/etc/dab/"
	cp -rf "${srcdir}/dabs/dev/" "${pkgdir}/etc/dab/"
	rm -rf "../dabs/"
	rm -r "${srcdir}"
}


