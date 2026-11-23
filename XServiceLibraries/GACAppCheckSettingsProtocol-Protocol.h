//
#ifndef GACAppCheckSettingsProtocol_Protocol_h
#define GACAppCheckSettingsProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACAppCheckSettingsProtocol <NSObject>

@required

@property (nonatomic) _Bool isTokenAutoRefreshEnabled;

@optional

@end

#endif /* GACAppCheckSettingsProtocol_Protocol_h */
