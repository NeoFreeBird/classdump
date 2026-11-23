//
#ifndef PTVImageLoaderDelegate_Protocol_h
#define PTVImageLoaderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVImageLoaderDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)imageLoaderCanLoadFromNetwork:(id)network;
- (void)imageLoader:(id)loader willChangeSourceTo:(id)to;
- (void)imageLoader:(id)loader didChangeSourceFrom:(id)from;
- (void)imageLoader:(id)loader willChangeStateTo:(long long)to;
- (void)imageLoader:(id)loader didChangeStateFrom:(long long)from;
- (void)imageLoader:(id)loader willChangeImageTo:(id)to;
- (void)imageLoader:(id)loader didChangeImageFrom:(id)from;

@end

#endif /* PTVImageLoaderDelegate_Protocol_h */
