//
#ifndef XDSButtonContent_h
#define XDSButtonContent_h
@import Foundation;

#include "XDSButtonContentElement.h"

@class NSObject;

@interface XDSButtonContent : NSObject // (Swift)

@property (nonatomic, readonly) XDSButtonContentElement *leading;
@property (nonatomic, readonly) XDSButtonContentElement *main;
@property (nonatomic, readonly) XDSButtonContentElement *trailing;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithLeading:(id)leading main:(id)main trailing:(id)trailing;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* XDSButtonContent_h */
