//
#ifndef TFSScribeThriftDataLinkLayer_h
#define TFSScribeThriftDataLinkLayer_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"
#include "TFSScribeThriftCellularLink.h"
#include "TFSScribeThriftOtherLink.h"
#include "TFSScribeThriftWifiLink.h"

@class NSObject, NSString;

@interface TFSScribeThriftDataLinkLayer : NSObject <TBase, NSCoding>

@property (retain, nonatomic) TFSScribeThriftCellularLink *cellularLink;
@property (readonly, nonatomic) _Bool cellularLinkIsSet;
@property (retain, nonatomic) TFSScribeThriftWifiLink *wifiLink;
@property (readonly, nonatomic) _Bool wifiLinkIsSet;
@property (retain, nonatomic) TFSScribeThriftOtherLink *otherLink;
@property (readonly, nonatomic) _Bool otherLinkIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCellularLink:(id)link wifiLink:(id)link otherLink:(id)link;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftDataLinkLayer_h */
