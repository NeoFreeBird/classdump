//
#ifndef _TtC14CallScheduleUI29BookingLinksObservationWorker_h
#define _TtC14CallScheduleUI29BookingLinksObservationWorker_h
@import Foundation;

@class CallModels.BookingLinksRepositoryProtocol, CallScheduleUI.BookingLinksStream, _$s11XFoundation11AsyncWorkerCN;

@interface CallScheduleUI.BookingLinksObservationWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallScheduleUI.BookingLinksStream bookingLinksStream;
    CallModels.BookingLinksRepositoryProtocol repository;
}

@end

#endif /* _TtC14CallScheduleUI29BookingLinksObservationWorker_h */
