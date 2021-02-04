/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSMutableDictionary;

@interface FMFSessionDataManager : NSObject {

	NSSet* _followers;
	NSSet* _following;
	NSSet* _locations;
	NSSet* _fences;
	NSMutableDictionary* _locationsCache;

}

@property (nonatomic,retain) NSMutableDictionary * locationsCache;              //@synthesize locationsCache=_locationsCache - In the implementation block
@property (nonatomic,retain) NSSet * followers;                                 //@synthesize followers=_followers - In the implementation block
@property (nonatomic,retain) NSSet * following;                                 //@synthesize following=_following - In the implementation block
@property (nonatomic,retain) NSSet * locations;                                 //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSSet * fences;                                    //@synthesize fences=_fences - In the implementation block
+(id)sharedInstance;
-(NSSet *)locations;
-(id)locationForHandle:(id)arg1 ;
-(void)abPreferencesDidChange;
-(NSSet *)followers;
-(id)followingForHandle:(id)arg1 ;
-(void)setFollowers:(NSSet *)arg1 ;
-(void)setFences:(NSSet *)arg1 ;
-(id)followerForHandle:(id)arg1 ;
-(id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2 ;
-(void)abDidChange;
-(id)favoritesOrdered;
-(void)setFollowing:(NSSet *)arg1 ;
-(NSSet *)following;
-(NSSet *)fences;
-(NSMutableDictionary *)locationsCache;
-(void)setLocationsCache:(NSMutableDictionary *)arg1 ;
-(void)setLocations:(NSSet *)arg1 ;
@end
