//
#ifndef TUCComponentContainerFactory_h
#define TUCComponentContainerFactory_h
@import Foundation;

@class NSObject;

@interface TUCComponentContainerFactory : NSObject

/* class methods */
+ (id)componentContainerWithComponentsDict:(id)dict componentIds:(id)ids layoutDict:(id)dict unifiedCardUnifiedID:(id)id experimentSignals:(id)signals displayOptions:(id)options;
+ (id)_tuc_swipeableContainerWithDictionary:(id)dictionary componentsDict:(id)dict unifiedCardUnifiedID:(id)id displayOptions:(id)options experimentSignals:(id)signals;
+ (id)_tuc_collectionsContainerWithDictionary:(id)dictionary componentsDict:(id)dict unifiedCardUnifiedID:(id)id displayOptions:(id)options;
+ (id)_tuc_productExplorerContainerWithDictionary:(id)dictionary componentsDict:(id)dict unifiedCardUnifiedID:(id)id displayOptions:(id)options;
+ (unsigned long long)_tuc_layoutTypeForString:(id)string;
+ (id)_tuc_defaultComponentContainerWithComponentIds:(id)ids componentsDict:(id)dict unifiedCardUnifiedID:(id)id displayOptions:(id)options experimentSignals:(id)signals;
+ (id)_tuc_componentIdsByRemovingButtonGroupIfMac:(id)mac;
+ (id)_tuc_matchJSONIds:(id)jsonids toComponentModels:(id)models;

@end

#endif /* TUCComponentContainerFactory_h */
