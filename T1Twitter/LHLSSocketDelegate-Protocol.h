//
#ifndef LHLSSocketDelegate_Protocol_h
#define LHLSSocketDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol LHLSSocketDelegate <NSObject>

@required

/* required instance methods */
- (void)createSendSourceWithQueue:(id)queue sockfd:(int)sockfd block:(id /* block */)block;
- (void)resumeSendSource;
- (void)cancelSendSource;
- (void)createReceiveSourceWithQueue:(id)queue sockfd:(int)sockfd block:(id /* block */)block;
- (void)cancelReceiveSource;
- (int)connect:(int)connect addr:(const struct sockaddr { unsigned char x0; unsigned char x1; signed char x2[14]; } *)addr addrlen:(unsigned int)addrlen;
- (int)getsockname:(int)getsockname addr:(struct sockaddr { unsigned char x0; unsigned char x1; signed char x2[14]; } *)addr addrlen:(unsigned int *)addrlen;
- (int)getsockopt:(int)getsockopt level:(int)level optname:(int)optname optval:(void *)optval optlen:(unsigned int *)optlen;
- (int)setsockopt:(int)setsockopt level:(int)level optname:(int)optname optval:(const void *)optval optlen:(unsigned int)optlen;
- (long long)recvfrom:(int)recvfrom buf:(void *)buf len:(unsigned long long)len flags:(int)flags src_addr:(struct sockaddr { unsigned char x0; unsigned char x1; signed char x2[14]; } *)src_addr addrlen:(unsigned int *)addrlen;
- (long long)send:(int)send buf:(const void *)buf len:(unsigned long long)len flags:(int)flags error:(int *)error;
- (long long)sendto:(int)sendto buf:(const void *)buf len:(unsigned long long)len flags:(int)flags dest_addr:(const struct sockaddr { unsigned char x0; unsigned char x1; signed char x2[14]; } *)dest_addr addrlen:(unsigned int)addrlen error:(int *)error;
- (int)socket:(int)socket type:(int)type protocol:(int)protocol;
- (void)close:(int)close;
- (int)getaddrinfo:(const char *)getaddrinfo service:(const char *)service hints:(const struct addrinfo { int x0; int x1; int x2; int x3; unsigned int x4; char *x5; struct sockaddr *x6; struct addrinfo *x7; } *)hints res:(struct addrinfo * *)res;
- (void)freeaddrinfo:(struct addrinfo { int x0; int x1; int x2; int x3; unsigned int x4; char *x5; struct sockaddr *x6; struct addrinfo *x7; } *)freeaddrinfo;

@optional

@end

#endif /* LHLSSocketDelegate_Protocol_h */
