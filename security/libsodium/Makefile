PORTNAME=	libsodium
#################################################
# Make sure to bump all consumers when updating #
#################################################
PORTVERSION=	1.0.19
CATEGORIES=	security

MAINTAINER=	vsevolod@FreeBSD.org
COMMENT=	Library to build higher-level cryptographic tools
WWW=		https://github.com/jedisct1/libsodium/

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		libtool pathfix pkgconfig gmake autoreconf
USE_LDCONFIG=	yes

USE_GITHUB=     yes
GH_ACCOUNT=     jedisct1
GH_TAGNAME=     2e662fb

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/AUTHORS ${STAGEDIR}${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/README.markdown ${STAGEDIR}${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/THANKS ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
