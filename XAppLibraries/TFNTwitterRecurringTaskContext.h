//
#ifndef TFNTwitterRecurringTaskContext_h
#define TFNTwitterRecurringTaskContext_h
@import Foundation;

@class NSObject, NSSet;
@protocol TFNTwitterRecurringTaskContextPanelIDProvider;

@interface TFNTwitterRecurringTaskContext : NSObject

@property (readonly, nonatomic) long long loadSource;
@property (readonly, weak, nonatomic) id <TFNTwitterRecurringTaskContextPanelIDProvider> panelIDProvider;
@property (readonly, copy, nonatomic) NSSet *priorityPanelIDs;

/* instance methods */
- (id)init;
- (id)initWithLoadSource:(long long)source panelIDProvider:(id)idprovider priorityPanelIDs:(id)ids;

@end

#endif /* TFNTwitterRecurringTaskContext_h */
