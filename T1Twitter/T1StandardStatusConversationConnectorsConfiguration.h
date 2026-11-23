//
#ifndef T1StandardStatusConversationConnectorsConfiguration_h
#define T1StandardStatusConversationConnectorsConfiguration_h
@import Foundation;

@class NSObject;

@interface T1StandardStatusConversationConnectorsConfiguration : NSObject

/* class methods */
+ (unsigned long long)connectorTypeForViewModel:(id)model anatomyFeatures:(id)features statusOptions:(unsigned long long)options;

@end

#endif /* T1StandardStatusConversationConnectorsConfiguration_h */
