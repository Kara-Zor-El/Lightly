#pragma once

#include <QSettings>
#include <QSharedPointer>
#include <QList>

class LightlySettings : public QSettings {
    Q_OBJECT
      public:
      explicit LightlySettings(QObject *parent = nullptr);
      ~LightlySettings() override;

      public slots:
      void loadSettings();
      void saveSettings();
      void resetSettings();

      private:
      void setDefaultSettings();
};

using InternalSettingsPtr = QSharedPointer<InternalSettings>; 
using InternalSettingsList = QList<InternalSettingsPtr>;
using InternalSettingsListIterator = QListIterator<InternalSettingsPtr>;
using m_settings = QSharedPointer<LightlySettings>;

