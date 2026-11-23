//
#ifndef T1ActivityModel_Protocol_h
#define T1ActivityModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ActivityModel <NSObject>

@required

/* required instance methods */
- (id)twitterURLForShareWithSParam:(unsigned long long)sparam;
- (id)plainTextSubject;
- (id)scribeParameterID;

@optional

/* optional instance methods */
- (id)emailSubject;
- (id)emailBody;

@end

#endif /* T1ActivityModel_Protocol_h */
