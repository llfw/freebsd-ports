PORTNAME=	supersonic
DISTVERSION=	0.11.0
PORTREVISION=	1
CATEGORIES=	audio

MAINTAINER=	lexi.freebsd@le-Fay.ORG
COMMENT=	Lightweight cross-platform desktop client for Subsonic and Jellyfin music servers
WWW=		https://github.com/dweymouth/supersonic

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libmpv.so:multimedia/mpv

USES=		go:modules pkgconfig gl
USE_GL=		gl

OPTIONS_DEFAULT=X11
OPTIONS_RADIO=	TOOLKIT
OPTIONS_RADIO_TOOLKIT=X11 WAYLAND
X11_DESC=	Use X11 for the GUI
WAYLAND_DESC=	Use Wayland for the GUI

USE_GITHUB=	yes
GH_ACCOUNT=	dweymouth
GH_PROJECT=	${PORTNAME}
GH_TAGNAME=	v${DISTVERSION}
.include "Makefile.deps"

WAYLAND_VARS=	GO_BUILDFLAGS="-tags wayland"
WAYLAND_BUILD_DEPENDS+=	${LOCALBASE}/include/linux/input.h:devel/evdev-proto
WAYLAND_LIB_DEPENDS+=	libwayland-cursor.so:graphics/wayland	\
			libwayland-egl.so:graphics/wayland	\
			libwayland-client.so:graphics/wayland	\
			libepoll-shim.so:devel/libepoll-shim

X11_USES=	xorg
X11_USE=	xorg=x11,xau,xcb,xdmcp,xcursor,xi

PLIST_FILES=	bin/supersonic

.include <bsd.port.mk>
