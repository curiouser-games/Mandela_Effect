// Copyright Out-of-the-Box Plugins 2018-2019. All Rights Reserved.

#pragma once

#include "AssetTypeActions_Base.h"
#include "Templates/SharedPointer.h"

class ISlateStyle;


/**
 * Implements an action for UObsEvent assets.
 */
class FObsEventActions
	: public FAssetTypeActions_Base
{
public:

	/**
	 * Creates and initializes a new instance.
	 *
	 * @param InStyle The style set to use for asset editor toolkits.
	 */
	FObsEventActions(const TSharedRef<ISlateStyle>& InStyle);

public:

	//~ FAssetTypeActions_Base overrides

	virtual bool CanFilter() override;
	virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override;
	virtual uint32 GetCategories() override;
	virtual FText GetName() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual FColor GetTypeColor() const override;
	virtual bool HasActions(const TArray<UObject *>& InObjects) const override;
	virtual void OpenAssetEditor(const TArray<UObject *>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor /* = TSharedPtr<IToolkitHost>() */) override;
	
private:

	/** Pointer to the style set to use for toolkits. */
	TSharedRef<ISlateStyle> Style;
};