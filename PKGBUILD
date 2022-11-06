# This is an example PKGBUILD file. Use this as a start to creating your own,
# and remove these comments. For more information, see 'man PKGBUILD'.
# NOTE: Please fill out the license field for your package! If it is unknown,
# then please put 'unknown'.

# Maintainer: Your Name <youremail@domain.com>
pkgname="Archiso-Build-Scripts"
pkgver=0.0.1
pkgrel=7
epoch=
pkgdesc="Set of scripts designed to automate the archiso build process after making updates to the provided archiso profile."
arch=('x86_64')
url="https://github.com/keyaedisa"
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
provides=('Archiso-Build-Scripts')
conflicts=('Archiso-Build-Scripts')
#replaces=()
#backup=()
#options=()
#install=
#changelog=
source=(${pkgname}::"git+https://github.com/keyaedisa/archisoBuildScripts"
)
#noextract=()
#md5sums=()
sha256sums=('SKIP')
#validpgpkeys=()

package() {
	mkdir -p "${pkgdir}/usr/local/bin/"
	cp "${srcdir}/${pkgname}/abs.sh" "${pkgdir}/usr/local/bin/abs"
	mkdir -p "${pkgdir}/etc/abs"
	cp -r  "${srcdir}/${pkgname}/buildScripts/" "${srcdir}/${pkgname}/misc/" "${pkgdir}/etc/abs"
	chmod +x "${pkgdir}/usr/local/bin/abs"
	rm -r "../Archiso-Build-Scripts"
	rm -r "${srcdir}"
}
