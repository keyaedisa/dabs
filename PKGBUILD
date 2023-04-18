# This is an example PKGBUILD file. Use this as a start to creating your own,
# and remove these comments. For more information, see 'man PKGBUILD'.
# NOTE: Please fill out the license field for your package! If it is unknown,
# then please put 'unknown'.

# Maintainer: Your Name <keyaedisa>
pkgname="dabs"
pkgver=3.6
pkgrel=24
epoch=
pkgdesc="Developer Version of abs. CLI tool to automate the customization and build of custom and built in distros such as Vanilla Arch and XeroLinux."
arch=('x86_64')
url="https://github.com/keyaedisa/abs"
#license=('')
#groups=()
depends=("git"
		"gawk"
		"sed"
		"archiso"
		"bash"
		"abs")
makedepends=('git')
#checkdepends=()
#optdepends=()
provides=('dabs')
#conflicts=('')
#replaces=('')
#backup=()
#options=()
#install=abs.install
#changelog=
source=("gc"::"git+https://github.com/keyaedisa/dabs.git")
#noextract=()
#md5sums=()
sha256sums=('SKIP')

package() {
	mkdir -p "${pkgdir}/usr/local/bin/"
	cp "${srcdir}/gc/dabs" "${pkgdir}/usr/local/bin/dabs"
	mkdir -p "${pkgdir}/etc/dabs/"
	cp -rf "${srcdir}/gc/include/" "${pkgdir}/etc/dabs/"
	cp -rf "${srcdir}/gc/included/" "${pkgdir}/etc/dabs/"
	rm -rf "../gc"
	rm -r "${srcdir}"
}


