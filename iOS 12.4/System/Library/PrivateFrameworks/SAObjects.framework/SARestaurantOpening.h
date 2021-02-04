/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, SAUIAppPunchOut, NSNumber, SACalendar, NSString;

@interface SARestaurantOpening : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * bookingId; 
@property (nonatomic,retain) SAUIAppPunchOut * makeReservationPunchOut; 
@property (nonatomic,copy) NSNumber * partySize; 
@property (nonatomic,retain) SACalendar * timeSlot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)opening;
+(id)openingWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setPartySize:(NSNumber *)arg1 ;
-(NSNumber *)partySize;
-(id)encodedClassName;
-(NSURL *)bookingId;
-(void)setBookingId:(NSURL *)arg1 ;
-(SAUIAppPunchOut *)makeReservationPunchOut;
-(void)setMakeReservationPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SACalendar *)timeSlot;
-(void)setTimeSlot:(SACalendar *)arg1 ;
-(id)groupIdentifier;
@end
