PORTNAME=	supersonic
DISTVERSION=	0.10.1
PORTREVISION=	1
CATEGORIES=	audio

MAINTAINER=	lexi.freebsd@le-Fay.ORG
COMMENT=	A lightweight cross-platform desktop client for Subsonic and Jellyfin music servers
WWW=		https://github.com/dweymouth/supersonic

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules xorg gl pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	dweymouth
GH_PROJECT=	${PORTNAME}
GH_TAGNAME=	v0.10.1
.include "Makefile.deps"

LIB_DEPENDS=	libmpv.so:multimedia/mpv
USE_XORG=	x11 xau xcb xdmcp xcursor xi
USE_GL=		gl

PLIST_FILES=	bin/supersonic

.include <bsd.port.mk>
