//
#ifndef TFNHashflagStringComponent_h
#define TFNHashflagStringComponent_h
@import Foundation;

#include "TFNHashflag.h"

@class NSObject, NSString;

@interface TFNHashflagStringComponent : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) TFNHashflag *hashflag;

/* class methods */
+ (id)componentsInString:(id)string;
+ (id)componentsInString:(id)string hashflagManager:(id)manager;

/* instance methods */
- (id)initWithText:(id)text hashflag:(id)hashflag;
- (id)initWithText:(id)text;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFNHashflagStringComponent_h */
