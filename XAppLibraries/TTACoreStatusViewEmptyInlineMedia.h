//
#ifndef TTACoreStatusViewEmptyInlineMedia_h
#define TTACoreStatusViewEmptyInlineMedia_h
@import Foundation;

#include "TTACoreStatusViewInlineMedia-Protocol.h"

@class NSObject, NSString;

@interface TTACoreStatusViewEmptyInlineMedia : NSObject <TTACoreStatusViewInlineMedia>

@property (readonly, nonatomic) long long numberOfMediaItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)mediaInfoAtIndex:(long long)index;
- (id)imageAtIndex:(long long)index;
- (id)mediaViewAtIndex:(long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaItemContentsRectAtIndex:(long long)index;
- (long long)mediaItemContentModeAtIndex:(long long)index;

@end

#endif /* TTACoreStatusViewEmptyInlineMedia_h */
