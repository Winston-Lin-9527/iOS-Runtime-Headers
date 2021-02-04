/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSUIDateLabel <NSObject>
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (assign,nonatomic,__weak) id<BSUIDateLabelDelegate> delegate; 
@property (assign,nonatomic) long long labelType; 
@property (assign,nonatomic) BOOL isTimestamp; 
@required
-(long long)labelType;
-(void)setLabelType:(long long)arg1;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1;
-(BOOL)isAllDay;
-(void)setAllDay:(BOOL)arg1;
-(void)startCoalescingUpdates;
-(void)stopCoalescingUpdates;
-(void)setDelegate:(id)arg1;
-(id<BSUIDateLabelDelegate>)delegate;
-(void)prepareForReuse;

@end
