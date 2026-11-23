//
#ifndef TSCAccountSettingsRepresentable_Protocol_h
#define TSCAccountSettingsRepresentable_Protocol_h
@import Foundation;

@class NSString;

@protocol TSCAccountSettingsRepresentable

@required

@property (nonatomic, readonly) NSString *countryCode;

@optional

@end

#endif /* TSCAccountSettingsRepresentable_Protocol_h */
