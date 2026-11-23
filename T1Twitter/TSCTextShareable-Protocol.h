//
#ifndef TSCTextShareable_Protocol_h
#define TSCTextShareable_Protocol_h
@import Foundation;

#include "TSCShareable-Protocol.h"

@class NSString;

@protocol TSCTextShareable <TSCShareable>

@required

@property (nonatomic, readonly) NSString *title;

@optional

@end

#endif /* TSCTextShareable_Protocol_h */
