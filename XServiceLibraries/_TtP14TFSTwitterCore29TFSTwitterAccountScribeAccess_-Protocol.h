//
#ifndef _TtP14TFSTwitterCore29TFSTwitterAccountScribeAccess__Protocol_h
#define _TtP14TFSTwitterCore29TFSTwitterAccountScribeAccess__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@protocol TFSTwitterCore.TFSTwitterAccountScribeAccess <NSObject>

@required

@property (nonatomic, readonly) id <TFSTwitterLegacyScribeLogMethods> scribe;

@optional

@end

#endif /* _TtP14TFSTwitterCore29TFSTwitterAccountScribeAccess__Protocol_h */
