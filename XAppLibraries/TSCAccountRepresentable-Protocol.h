//
#ifndef TSCAccountRepresentable_Protocol_h
#define TSCAccountRepresentable_Protocol_h
@import Foundation;

#include "TFSAccountProtocol-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TSCAccountSettingsRepresentable-Protocol.h"

@class NSString;

@protocol TSCAccountRepresentable <TFSAccountProtocol>

@required

@property (nonatomic, readonly) id <TSCAccountSettingsRepresentable> settings;
@property (nonatomic, readonly) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (nonatomic, readonly) NSString *accountID;

@optional

@end

#endif /* TSCAccountRepresentable_Protocol_h */
