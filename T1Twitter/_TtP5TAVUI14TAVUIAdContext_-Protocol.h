//
#ifndef _TtP5TAVUI14TAVUIAdContext__Protocol_h
#define _TtP5TAVUI14TAVUIAdContext__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol TAVUI.TAVUIAdContext <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *advertiserName;
@property (readonly, copy, nonatomic) NSURL *advertiserProfileImageUrl;

@optional

@end

#endif /* _TtP5TAVUI14TAVUIAdContext__Protocol_h */
