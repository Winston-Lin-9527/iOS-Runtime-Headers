/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContact.h>

@class NSString, NSData, NSArray, CNContactKeyVector, NSDictionary, NSDate, CNContact, CNActivityAlert, NSDateComponents;

@interface CNMutableContact : CNContact {

	BOOL _hasChanges;
	NSString* _cropRectID;
	NSData* _cropRectHash;

}

@property (copy) NSString * nameTitle; 
@property (copy) NSString * firstName; 
@property (copy) NSString * lastName; 
@property (copy) NSString * maidenName; 
@property (copy) NSString * phoneticFirstName; 
@property (copy) NSString * phoneticLastName; 
@property (copy) NSString * companyName; 
@property (copy) NSArray * relatedNames; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
@property (assign,nonatomic) BOOL imageDataAvailable; 
@property (nonatomic,copy) NSArray * calendarURIs; 
@property (nonatomic,copy) NSString * cardDAVUID; 
@property (nonatomic,copy) CNContactKeyVector * availableKeyDescriptor; 
@property (nonatomic,copy) NSString * storeIdentifier; 
@property (nonatomic,copy) NSDictionary * storeInfo; 
@property (nonatomic,copy) NSString * searchIndex; 
@property (nonatomic,copy) NSDictionary * activityAlerts; 
@property (nonatomic,copy) NSString * sectionForSortingByGivenName; 
@property (nonatomic,copy) NSString * sectionForSortingByFamilyName; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) CNContact * snapshot; 
@property (assign,getter=isPreferredForName,nonatomic) BOOL preferredForName; 
@property (assign,getter=isPreferredForImage,nonatomic) BOOL preferredForImage; 
@property (nonatomic,copy) NSArray * linkedContacts; 
@property (nonatomic,copy) NSString * linkIdentifier; 
@property (assign,nonatomic) CGRect cropRect; 
@property (nonatomic,copy) NSData * thumbnailImageData; 
@property (nonatomic,copy) NSString * cropRectID;                                            //@synthesize cropRectID=_cropRectID - In the implementation block
@property (nonatomic,copy) NSData * cropRectHash;                                            //@synthesize cropRectHash=_cropRectHash - In the implementation block
@property (nonatomic,copy) NSData * fullscreenImageData; 
@property (nonatomic,copy) NSData * syncImageData; 
@property (nonatomic,copy) CNActivityAlert * callAlert; 
@property (nonatomic,copy) CNActivityAlert * textAlert; 
@property (nonatomic,copy) NSString * phonemeData; 
@property (nonatomic,copy) NSString * phoneticCompanyName; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSData * externalRepresentation; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * externalUUID; 
@property (nonatomic,copy) NSString * externalImageURI; 
@property (nonatomic,copy) NSString * mapsData; 
@property (nonatomic,readonly) BOOL hasChanges;                                              //@synthesize hasChanges=_hasChanges - In the implementation block
@property (nonatomic,copy) NSString * pronunciationGivenName; 
@property (nonatomic,copy) NSString * pronunciationFamilyName; 
@property (nonatomic,copy) NSString * preferredLikenessSource; 
@property (nonatomic,copy) NSString * preferredApplePersonaIdentifier; 
@property (nonatomic,copy) NSString * preferredChannel; 
@property (nonatomic,copy) NSString * downtimeWhitelist; 
@property (nonatomic,copy) NSString * imageType; 
@property (nonatomic,copy) NSData * imageHash; 
@property (assign,nonatomic) long long contactType; 
@property (nonatomic,copy) NSString * namePrefix; 
@property (nonatomic,copy) NSString * givenName; 
@property (nonatomic,copy) NSString * middleName; 
@property (nonatomic,copy) NSString * familyName; 
@property (nonatomic,copy) NSString * previousFamilyName; 
@property (nonatomic,copy) NSString * nameSuffix; 
@property (nonatomic,copy) NSString * nickname; 
@property (nonatomic,copy) NSString * organizationName; 
@property (nonatomic,copy) NSString * departmentName; 
@property (nonatomic,copy) NSString * jobTitle; 
@property (nonatomic,copy) NSString * phoneticGivenName; 
@property (nonatomic,copy) NSString * phoneticMiddleName; 
@property (nonatomic,copy) NSString * phoneticFamilyName; 
@property (nonatomic,copy) NSString * phoneticOrganizationName; 
@property (nonatomic,copy) NSString * note; 
@property (nonatomic,copy) NSData * imageData; 
@property (nonatomic,copy) NSArray * phoneNumbers; 
@property (nonatomic,copy) NSArray * emailAddresses; 
@property (nonatomic,copy) NSArray * postalAddresses; 
@property (nonatomic,copy) NSArray * urlAddresses; 
@property (nonatomic,copy) NSArray * contactRelations; 
@property (nonatomic,copy) NSArray * socialProfiles; 
@property (nonatomic,copy) NSArray * instantMessageAddresses; 
@property (nonatomic,copy) NSDateComponents * birthday; 
@property (nonatomic,copy) NSDateComponents * nonGregorianBirthday; 
@property (nonatomic,copy) NSArray * dates; 
+(id)unifyContacts:(id)arg1 ;
+(id)imageDataDescriptions;
+(void)freezeIfInstancetypeIsImmutable:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)freeze;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)namePrefix;
-(void)setNamePrefix:(NSString *)arg1 ;
-(NSString *)nameSuffix;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(void)setNilValueForKey:(id)arg1 ;
-(BOOL)hasChanges;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(NSArray *)phoneNumbers;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)organizationName;
-(void)setSnapshot:(CNContact *)arg1 ;
-(void)setImageType:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSData *)imageData;
-(NSString *)imageType;
-(NSArray *)emailAddresses;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSString *)mapsData;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSData *)imageHash;
-(NSString *)linkIdentifier;
-(CNContactKeyVector *)availableKeyDescriptor;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(NSArray *)urlAddresses;
-(CGRect)cropRect;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSString *)preferredChannel;
-(void)setPreferredChannel:(NSString *)arg1 ;
-(NSString *)phoneticGivenName;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(NSString *)phoneticMiddleName;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(NSString *)phoneticFamilyName;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(void)setStoreInfo:(NSDictionary *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setContactType:(long long)arg1 ;
-(long long)contactType;
-(NSArray *)instantMessageAddresses;
-(NSArray *)socialProfiles;
-(void)setInstantMessageAddresses:(NSArray *)arg1 ;
-(NSString *)note;
-(NSString *)departmentName;
-(NSString *)jobTitle;
-(NSArray *)dates;
-(NSDateComponents *)birthday;
-(NSDateComponents *)nonGregorianBirthday;
-(NSArray *)postalAddresses;
-(void)_setExternalIdentifier:(id)arg1 ;
-(NSData *)externalRepresentation;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(void)_setExternalRepresentation:(id)arg1 ;
-(void)_setExternalModificationTag:(id)arg1 ;
-(NSString *)externalUUID;
-(void)setExternalUUID:(NSString *)arg1 ;
-(void)_setExternalUUID:(id)arg1 ;
-(NSString *)externalImageURI;
-(void)setExternalImageURI:(NSString *)arg1 ;
-(void)_setExternalImageURI:(id)arg1 ;
-(void)_setNamePrefix:(id)arg1 ;
-(void)_setGivenName:(id)arg1 ;
-(void)_setMiddleName:(id)arg1 ;
-(void)_setFamilyName:(id)arg1 ;
-(void)_setNameSuffix:(id)arg1 ;
-(NSString *)previousFamilyName;
-(void)setPreviousFamilyName:(NSString *)arg1 ;
-(void)_setPreviousFamilyName:(id)arg1 ;
-(void)_setNickname:(id)arg1 ;
-(void)_setPhoneticGivenName:(id)arg1 ;
-(void)_setPhoneticMiddleName:(id)arg1 ;
-(void)_setPhoneticFamilyName:(id)arg1 ;
-(NSString *)phoneticOrganizationName;
-(void)setPhoneticOrganizationName:(NSString *)arg1 ;
-(void)_setPhoneticOrganizationName:(id)arg1 ;
-(NSString *)pronunciationGivenName;
-(void)setPronunciationGivenName:(NSString *)arg1 ;
-(void)_setPronunciationGivenName:(id)arg1 ;
-(NSString *)pronunciationFamilyName;
-(void)setPronunciationFamilyName:(NSString *)arg1 ;
-(void)_setPronunciationFamilyName:(id)arg1 ;
-(NSString *)sectionForSortingByGivenName;
-(void)setSectionForSortingByGivenName:(NSString *)arg1 ;
-(void)_setSectionForSortingByGivenName:(id)arg1 ;
-(NSString *)sectionForSortingByFamilyName;
-(void)setSectionForSortingByFamilyName:(NSString *)arg1 ;
-(void)_setSectionForSortingByFamilyName:(id)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)_setOrganizationName:(id)arg1 ;
-(void)setDepartmentName:(NSString *)arg1 ;
-(void)_setDepartmentName:(id)arg1 ;
-(void)setJobTitle:(NSString *)arg1 ;
-(void)_setJobTitle:(id)arg1 ;
-(void)setBirthday:(NSDateComponents *)arg1 ;
-(void)_setBirthday:(id)arg1 ;
-(void)setNonGregorianBirthday:(NSDateComponents *)arg1 ;
-(void)_setNonGregorianBirthday:(id)arg1 ;
-(void)_setCreationDate:(id)arg1 ;
-(void)_setModificationDate:(id)arg1 ;
-(void)setNote:(NSString *)arg1 ;
-(void)_setNote:(id)arg1 ;
-(void)_setImageData:(id)arg1 ;
-(NSData *)thumbnailImageData;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(void)_setThumbnailImageData:(id)arg1 ;
-(NSData *)fullscreenImageData;
-(void)setFullscreenImageData:(NSData *)arg1 ;
-(void)_setFullscreenImageData:(id)arg1 ;
-(NSData *)syncImageData;
-(void)setSyncImageData:(NSData *)arg1 ;
-(void)_setSyncImageData:(id)arg1 ;
-(BOOL)imageDataAvailable;
-(void)setImageDataAvailable:(BOOL)arg1 ;
-(void)setLinkIdentifier:(NSString *)arg1 ;
-(void)_setLinkIdentifier:(id)arg1 ;
-(void)setPreferredForName:(BOOL)arg1 ;
-(void)setPreferredForImage:(BOOL)arg1 ;
-(NSString *)preferredLikenessSource;
-(void)setPreferredLikenessSource:(NSString *)arg1 ;
-(void)_setPreferredLikenessSource:(id)arg1 ;
-(NSString *)preferredApplePersonaIdentifier;
-(void)setPreferredApplePersonaIdentifier:(NSString *)arg1 ;
-(void)_setPreferredApplePersonaIdentifier:(id)arg1 ;
-(void)_setPhoneNumbers:(id)arg1 ;
-(void)_setEmailAddresses:(id)arg1 ;
-(void)setUrlAddresses:(NSArray *)arg1 ;
-(void)_setUrlAddresses:(id)arg1 ;
-(NSArray *)calendarURIs;
-(void)setCalendarURIs:(NSArray *)arg1 ;
-(void)_setCalendarURIs:(id)arg1 ;
-(void)setDates:(NSArray *)arg1 ;
-(void)_setDates:(id)arg1 ;
-(NSArray *)contactRelations;
-(void)setContactRelations:(NSArray *)arg1 ;
-(void)_setContactRelations:(id)arg1 ;
-(void)_setInstantMessageAddresses:(id)arg1 ;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(void)_setSocialProfiles:(id)arg1 ;
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(void)_setPostalAddresses:(id)arg1 ;
-(NSString *)phonemeData;
-(void)setPhonemeData:(NSString *)arg1 ;
-(void)_setPhonemeData:(id)arg1 ;
-(CNActivityAlert *)callAlert;
-(void)setCallAlert:(CNActivityAlert *)arg1 ;
-(void)_setCallAlert:(id)arg1 ;
-(CNActivityAlert *)textAlert;
-(void)setTextAlert:(CNActivityAlert *)arg1 ;
-(void)_setTextAlert:(id)arg1 ;
-(void)setMapsData:(NSString *)arg1 ;
-(void)_setMapsData:(id)arg1 ;
-(void)_setPreferredChannel:(id)arg1 ;
-(NSString *)downtimeWhitelist;
-(void)setDowntimeWhitelist:(NSString *)arg1 ;
-(void)_setDowntimeWhitelist:(id)arg1 ;
-(void)_setImageType:(id)arg1 ;
-(void)setImageHash:(NSData *)arg1 ;
-(void)_setImageHash:(id)arg1 ;
-(void)setFrozenSelfAsSnapshot;
-(id)freezeWithSelfAsSnapshot;
-(void)setLinkedContacts:(NSArray *)arg1 ;
-(void)setAvailableKeyDescriptor:(CNContactKeyVector *)arg1 ;
-(void)_setSearchIndex:(id)arg1 ;
-(void)updateImageDataAvailableFromCurrentState;
-(void)resetToNewContact;
-(void)overwriteStateFromContact:(id)arg1 ;
-(id)copyWithSelfAsSnapshot;
-(void)setPhoneticCompanyName:(NSString *)arg1 ;
-(NSString *)searchIndex;
-(void)setSearchIndex:(NSString *)arg1 ;
-(BOOL)preferredForName;
-(BOOL)preferredForImage;
-(NSString *)cardDAVUID;
-(void)setCardDAVUID:(NSString *)arg1 ;
-(void)setActivityAlerts:(NSDictionary *)arg1 ;
-(void)updateStateFromContact:(id)arg1 ;
-(void)removeKeys:(id)arg1 ;
-(NSString *)cropRectID;
-(void)setCropRectID:(NSString *)arg1 ;
-(NSData *)cropRectHash;
-(void)setCropRectHash:(NSData *)arg1 ;
-(void)setNameTitle:(NSString *)arg1 ;
-(void)setMaidenName:(NSString *)arg1 ;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(void)setRelatedNames:(NSArray *)arg1 ;
@end
