//
#ifndef TUCComponentViewEvent_h
#define TUCComponentViewEvent_h
@import Foundation;

#include "TUCComponentView-Protocol.h"
#include "TUCDestinationModel.h"
#include "TUCVideoComponentView.h"

@class NSDictionary, NSNumber, NSObject, NSString, NSValue, TFSTwitterEntityMedia, UIView;

@interface TUCComponentViewEvent : NSObject

@property (nonatomic, readonly) TUCVideoComponentView *dockedMediaVideoComponentView;
@property (nonatomic, readonly) double dockedMediaVideoAspectRatio;
@property (copy, nonatomic) NSDictionary *detailParameters;
@property (retain, nonatomic) NSNumber *componentTypeOverride;
@property (readonly, nonatomic) UIView<TUCComponentView> *componentView;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) TUCDestinationModel *destination;
@property (retain, nonatomic) NSDictionary *supplementalParams;
@property (retain, nonatomic) NSNumber *slideIndex;
@property (retain, nonatomic) TFSTwitterEntityMedia *selectedMediaOfSingleDestinationCarousel;
@property (readonly, nonatomic) NSString *eventTypeString;
@property (readonly, nonatomic) NSString *scribeAction;
@property (readonly, nonatomic) NSDictionary *ucEventDictionary;
@property (readonly, nonatomic) id /* block */ customScribeBlock;
@property (retain, nonatomic) NSValue *touchPoint;

/* instance methods */
- (id)init;
- (id)initWithComponentView:(id)view scribeBlock:(id /* block */)block;
- (id)initWithComponentView:(id)view eventType:(unsigned long long)type;
- (id)initWithComponentView:(id)view eventType:(unsigned long long)type componentType:(unsigned long long)type;
- (id)initWithComponentView:(id)view eventType:(unsigned long long)type destination:(id)destination;
- (id)initWithSwipeEventType:(unsigned long long)type slideIndex:(id)index;
- (id)initWithSwipeEventType:(unsigned long long)type currentIndex:(id)index previousIndex:(id)index scribeAction:(id)action;
- (id)initWithEventType:(unsigned long long)type componentType:(unsigned long long)type destination:(id)destination;
- (id)initWithEventType:(unsigned long long)type componentType:(unsigned long long)type destination:(id)destination supplementalParams:(id)params slideIndex:(id)index scribeAction:(id)action;
- (id)engagementDetailsDictionaryWithDestinationPresenterResult:(id)result;
- (id)promotedLoggingParametersWithDestinationPresenterResult:(id)result;
- (id)eventMetadataWithDestinationPresenterResult:(id)result;
- (id)eventDetailsWithDestinationPresenterResult:(id)result;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TUCComponentViewEvent_h */
