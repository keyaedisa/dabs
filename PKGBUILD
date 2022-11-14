# This is an example PKGBUILD file. Use this as a start to creating your own,
# and remove these comments. For more information, see 'man PKGBUILD'.
# NOTE: Please fill out the license field for your package! If it is unknown,
# then please put 'unknown'.

# Maintainer: Your Name <keyaedisa>
pkgname="abs"
pkgver=2.2
pkgrel=7
epoch=
pkgdesc="Command line utility to automate the building of an arch iso using a user provided profile! Also the official way to build XeroLinux!"
arch=('x86_64')
url="https://github.com/keyaedisa/abs"
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
provides=('abs')
conflicts=('archiso-build-scripts')
#replaces=('archiso-build-scripts')
#backup=()
#options=()
#install=
#changelog=
source=("gclone"::"git+https://github.com/keyaedisa/abs"
)
#noextract=()
#md5sums=()
sha256sums=('SKIP')

package() {
	mkdir -p "${pkgdir}/usr/local/bin/"
	cp "${srcdir}/gclone/abs" "${pkgdir}/usr/local/bin/abs"
	mkdir -p "${pkgdir}/etc/abs/"
	cp -rf "${srcdir}/gclone/misc/" "${pkgdir}/etc/abs/"
	cp -rf "${srcdir}/gclone/options/" "${pkgdir}/etc/abs/"
	cp "${srcdir}/gclone/options/.options" "${pkgdir}/etc/abs/"
	rm -r "../gclone"
	rm -r "${srcdir}"
}


