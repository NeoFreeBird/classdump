//
#ifndef TFSTwitterTranslationPoll_h
#define TFSTwitterTranslationPoll_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterTranslationPoll : NSObject <NSCoding> // (Swift)

@property (nonatomic, readonly) NSString *text;

/* instance methods */
- (id)initWithText:(id)text;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterTranslationPoll_h */
