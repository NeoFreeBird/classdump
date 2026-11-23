//
#ifndef _TtC14T1TwitterSwift18SurveyCardResponse_h
#define _TtC14T1TwitterSwift18SurveyCardResponse_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject, _$sSo19NSMutableDictionaryC, _$sSo8NSNumberC;

@interface T1TwitterSwift.SurveyCardResponse : NSObject <NSCoding> { // (Swift)
    /* instance variables */
    __C.NSMutableDictionary responses;
    __C.NSNumber questionsCompleted;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift18SurveyCardResponse_h */
