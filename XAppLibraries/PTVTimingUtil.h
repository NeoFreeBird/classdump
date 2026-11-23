//
#ifndef PTVTimingUtil_h
#define PTVTimingUtil_h
@import Foundation;

@class NSObject;

@interface PTVTimingUtil : NSObject

/* class methods */
+ (id)deliveryDateForMessage:(id)message dataSource:(id)source;
+ (id)deliveryDateForPDT:(id)pdt dataSource:(id)source;
+ (_Bool)isDeliveryDateDue:(id)due;
+ (id)chatStartDateWithDataSource:(id)source broadcastStartDate:(id)date;

@end

#endif /* PTVTimingUtil_h */
