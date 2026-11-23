//
#ifndef _TtP5TAVUI14TAVUIAdContext__Protocol_h
#define _TtP5TAVUI14TAVUIAdContext__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol TAVUI.TAVUIAdContext <NSObject>

@required

@property (nonatomic, readonly) NSString *advertiserName;
@property (nonatomic, readonly) NSURL *advertiserProfileImageUrl;

@optional

@end

#endif /* _TtP5TAVUI14TAVUIAdContext__Protocol_h */
