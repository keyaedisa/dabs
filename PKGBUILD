# This is an example PKGBUILD file. Use this as a start to creating your own,
# and remove these comments. For more information, see 'man PKGBUILD'.
# NOTE: Please fill out the license field for your package! If it is unknown,
# then please put 'unknown'.

# Maintainer: Your Name <keyaedisa>
pkgname="absd"
pkgver=2.3
pkgrel=2
epoch=
pkgdesc="Command line utility to automate the building of an arch iso using a user provided profile! Also the official way to build XeroLinux and XeroLinux Gnome Edition!"
arch=('x86_64')
url="https://github.com/keyaedisa/absd"
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
provides=('absd')
#conflicts=('archiso-build-scripts')
#replaces=('archiso-build-scripts')
#backup=()
#options=()
#install=
#changelog=
source=("gclone"::"git@github.com:keyaedisa/absd.git"
)
#noextract=()
#md5sums=()
sha256sums=('SKIP')

package() {
	mkdir -p "${pkgdir}/usr/local/bin/"
	cp "${srcdir}/gclone/absd" "${pkgdir}/usr/local/bin/absd"
	mkdir -p "${pkgdir}/etc/absd/"
	cp -rf "${srcdir}/gclone/misc/" "${pkgdir}/etc/absd/"
	cp -rf "${srcdir}/gclone/options/" "${pkgdir}/etc/absd/"
	cp "${srcdir}/gclone/options/.options" "${pkgdir}/etc/absd/"
	rm -r "../gclone"
	rm -r "${srcdir}"
}


