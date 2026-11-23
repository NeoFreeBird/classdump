//
#ifndef TTACoreStatusViewInlineMedia_Protocol_h
#define TTACoreStatusViewInlineMedia_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTACoreStatusViewInlineMedia <NSObject>

@required

@property (nonatomic, readonly) long long numberOfMediaItems;

/* required instance methods */
- (id)mediaInfoAtIndex:(long long)index;
- (id)mediaInfoAtIndex:(long long)index;
- (id)imageAtIndex:(long long)index;
- (id)imageAtIndex:(long long)index;
- (id)mediaViewAtIndex:(long long)index;
- (id)mediaViewAtIndex:(long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaItemContentsRectAtIndex:(long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaItemContentsRectAtIndex:(long long)index;
- (long long)mediaItemContentModeAtIndex:(long long)index;
- (long long)mediaItemContentModeAtIndex:(long long)index;

@optional

/* optional instance methods */
- (_Bool)isImageRequestedAtIndex:(long long)index;
- (_Bool)isImageRequestedAtIndex:(long long)index;

@end

#endif /* TTACoreStatusViewInlineMedia_Protocol_h */
